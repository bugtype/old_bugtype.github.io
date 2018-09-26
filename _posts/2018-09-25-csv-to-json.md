---
layout: post
title:  "javascript - csv to json 하는 방법"
date:   2018-09-25 14:50:00
categories: javascript
tags: javascript node
---

* content
{:toc}

## 설명

Front-end는 `Papa-parse` 이용

Node는 `csvtojson` 모듈 이용

## 주의

Front-end에서 구현할 떄, **fs(file stream)**을 사용하지 못하므로 **node** 용 csvtojson는 사용하지 못한다.
Front-end에서 구현할 떄, csv파일 공개 되어야 한다. ( web 통신으로 읽은 다음 처리)

## 관련 링크
- https://www.papaparse.com/
- https://npmjs.org/package/csvtojson
