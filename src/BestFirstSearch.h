//
// Created by aviv on 1/3/19.
//

#ifndef SECONDYEARPROJECT_BIU_BESTFIRSTSEARCH_H
#define SECONDYEARPROJECT_BIU_BESTFIRSTSEARCH_H

#include <queue>
#include "Searcher.h"

namespace server_side {
    namespace algorithm {
        template<class T>
        class BestFirstSearch : public Searcher<T> {
            priority_queue<problem::State<T>, vector<problem::State<T>>, greater<problem::State<T>>> priorityQueue;
        public:
            inline BestFirstSearch() {}

            int openListSize();

            problem::State<T> popOpenList();

            problem::Solution search(problem::ISearchable<T> *searchable);

        };
    }
}

#endif //SECONDYEARPROJECT_BIU_BESTFIRSTSEARCH_H
