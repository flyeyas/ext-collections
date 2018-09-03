//
// ext-collections/php_collections_me.h
//
// @Author CismonX
//

#ifndef PHP_COLLECTIONS_ME_H
#define PHP_COLLECTIONS_ME_H

PHP_METHOD(Collection, __construct);
PHP_METHOD(Collection, addAll);
PHP_METHOD(Collection, all);
PHP_METHOD(Collection, any);
PHP_METHOD(Collection, associate);
PHP_METHOD(Collection, associateTo);
PHP_METHOD(Collection, associateBy);
PHP_METHOD(Collection, associateByTo);
PHP_METHOD(Collection, average);
PHP_METHOD(Collection, containsAll);
PHP_METHOD(Collection, containsAllKeys);
PHP_METHOD(Collection, containsAllValues);
PHP_METHOD(Collection, containsKey);
PHP_METHOD(Collection, containsValue);
PHP_METHOD(Collection, copyOf);
PHP_METHOD(Collection, copyOfRange);
PHP_METHOD(Collection, count);
PHP_METHOD(Collection, distinct);
PHP_METHOD(Collection, distinctBy);
PHP_METHOD(Collection, drop);
PHP_METHOD(Collection, dropLast);
PHP_METHOD(Collection, dropLastWhile);
PHP_METHOD(Collection, dropWhile);
PHP_METHOD(Collection, fill);
PHP_METHOD(Collection, filter);
PHP_METHOD(Collection, filterNot);
PHP_METHOD(Collection, filterNotTo);
PHP_METHOD(Collection, filterTo);
PHP_METHOD(Collection, first);
PHP_METHOD(Collection, flatMap);
PHP_METHOD(Collection, flatMapTo);
PHP_METHOD(Collection, flatten);
PHP_METHOD(Collection, fold);
PHP_METHOD(Collection, foldRight);
PHP_METHOD(Collection, forEach);
PHP_METHOD(Collection, get);
PHP_METHOD(Collection, groupBy);
PHP_METHOD(Collection, groupByTo);
PHP_METHOD(Collection, indexOf);
PHP_METHOD(Collection, indexOfFirst);
PHP_METHOD(Collection, indexOfLast);
PHP_METHOD(Collection, init);
PHP_METHOD(Collection, intersect);
PHP_METHOD(Collection, intersectKeys);
PHP_METHOD(Collection, intersectValues);
PHP_METHOD(Collection, isEmpty);
PHP_METHOD(Collection, isNotEmpty);
PHP_METHOD(Collection, keys);
PHP_METHOD(Collection, last);
PHP_METHOD(Collection, lastIndexOf);
PHP_METHOD(Collection, map);
PHP_METHOD(Collection, mapTo);
PHP_METHOD(Collection, max);
PHP_METHOD(Collection, maxBy);
PHP_METHOD(Collection, maxWith);
PHP_METHOD(Collection, min);
PHP_METHOD(Collection, minBy);
PHP_METHOD(Collection, minWith);
PHP_METHOD(Collection, minus);
PHP_METHOD(Collection, minusAssign);
PHP_METHOD(Collection, minusKeys);
PHP_METHOD(Collection, minusKeysAssign);
PHP_METHOD(Collection, minusValues);
PHP_METHOD(Collection, minusValuesAssign);
PHP_METHOD(Collection, none);
PHP_METHOD(Collection, onEach);
PHP_METHOD(Collection, packed);
PHP_METHOD(Collection, partition);
PHP_METHOD(Collection, plus);
PHP_METHOD(Collection, plusAssign);
PHP_METHOD(Collection, plusValues);
PHP_METHOD(Collection, plusValuesAssign);
PHP_METHOD(Collection, putAll);
PHP_METHOD(Collection, reduce);
PHP_METHOD(Collection, reduceRight);
PHP_METHOD(Collection, remove);
PHP_METHOD(Collection, removeAll);
PHP_METHOD(Collection, retainAll);
PHP_METHOD(Collection, reverse);
PHP_METHOD(Collection, reversed);
PHP_METHOD(Collection, shuffle);
PHP_METHOD(Collection, shuffled);
PHP_METHOD(Collection, set);
PHP_METHOD(Collection, single);
PHP_METHOD(Collection, slice);
PHP_METHOD(Collection, sort);
PHP_METHOD(Collection, sortBy);
PHP_METHOD(Collection, sortByDescending);
PHP_METHOD(Collection, sortDescending);
PHP_METHOD(Collection, sortWith);
PHP_METHOD(Collection, sorted);
PHP_METHOD(Collection, sortedBy);
PHP_METHOD(Collection, sortedByDescending);
PHP_METHOD(Collection, sortedDescending);
PHP_METHOD(Collection, sortedWith);
PHP_METHOD(Collection, take);
PHP_METHOD(Collection, takeLast);
PHP_METHOD(Collection, takeLastWhile);
PHP_METHOD(Collection, takeWhile);
PHP_METHOD(Collection, toArray);
PHP_METHOD(Collection, toCollection);
PHP_METHOD(Collection, toPairs);
PHP_METHOD(Collection, union);
PHP_METHOD(Collection, values);

PHP_METHOD(Pair, __construct);

#endif // !PHP_COLLECTIONS_ME_H
