try:
    def f():
        try:
            res = 8>6
        except TypeError: return 0
        except BaseException: return 7
        return res
    
    print(f())
    
except: print('error')
