try:
    def f():
        try:
            res = int(2//0)
        except BaseException: return 7
        except TypeError: return 1
        return res
    
    print(f())
    
except: print('error')
