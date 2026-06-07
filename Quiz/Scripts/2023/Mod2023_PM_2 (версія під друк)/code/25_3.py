try:
    def f():
        try:
            res = int(6%0)
        except TypeError: return 7
        except BaseException: return 4
        return res
    
    print(f())
    
except: print('error')
