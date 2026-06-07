try:
    def f():
        try:
            res = int(2/0.0)
        except TypeError: return 0
        except BaseException: return 1
        else: return 32
        return res
    
    print(f())
    
except: print('error')
