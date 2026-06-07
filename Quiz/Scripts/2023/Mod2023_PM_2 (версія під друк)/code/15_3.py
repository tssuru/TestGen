try:
    def f():
        try:
            res = 8!=4
            return 41
        except TypeError: return 3
        except BaseException: return 6
        else: return 34
        return res
    
    print(f())
    
except: print('error')
