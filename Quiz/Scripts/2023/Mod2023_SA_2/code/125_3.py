try:
    def f():
        try:
            res = 2<4
            return 40
        except TypeError: return 9
        except BaseException: return 8
        return res
    
    print(f())
    
except: print('error')
