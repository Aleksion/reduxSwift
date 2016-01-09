//
//  BindActionCreatorsSpec.swift
//  ReduxKit
//
//  Created by Aleksander Herforth Rendtslev on 09/11/15.
//  Copyright © 2015 Kare Media. All rights reserved.
//

import Quick
import Nimble
@testable import ReduxKit

class BindActionCreatorsSpec: QuickSpec {

    // swiftlint:disable function_body_length
    // swiftlint:disable line_length
    override func spec() {

        describe("BindActionCreators") {

            // Arrange
            var state: AppState!
            var defaultState: AppState!
            var store: Store<AppState>!
            let textMessage = "test"

            beforeEach {
                store = createStore(applicationReducer, state: nil)
                defaultState = store.state
                store.subscribe { state = $0 }
            }

            it("should succesfully create an action method that calls the store's dispatch with nil value") {
                // Act
                let increment = bindActionCreators(IncrementAction.self, dispatch: store.dispatch)

                increment(payload: nil)

                // Assert
                expect(state.counter).toNot(equal(defaultState.counter))
                expect(state.counter).to(equal(defaultState.counter + 1))
            }

            it("should succesfully create an action method that calls the store's dispatch with an actual value") {
                // Act
                let push = bindActionCreators(PushAction.self, dispatch: store.dispatch)

                push(payload: PushAction.Payload(text: textMessage))

                // Assert
                expect(defaultState.countries).toNot(contain(textMessage))
                expect(state.countries).to(contain(textMessage))
            }
        }
    }
}
