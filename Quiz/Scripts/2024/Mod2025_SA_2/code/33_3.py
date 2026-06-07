try:
    def f():
        try:
            res = int(3/1)
            return 43
        except TypeError: 
            return 6
        except BaseException: 
            return 5
        return res
    
    print(f())
except: print('error')
