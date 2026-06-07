try:
    def f():
        try:
            res = 4<9
            return 45
        except ValueError: return 2
        except BaseException: return 7
        else: return 30
        return res
    
    print(f())
    
except: print('error')
