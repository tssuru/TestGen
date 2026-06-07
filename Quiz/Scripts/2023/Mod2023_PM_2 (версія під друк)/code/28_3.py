try:
    def f():
        try:
            res = 9>8
        except TypeError: return 8
        except ValueError: return 4
        else: return 31
        return res
    
    print(f())
    
except: print('error')
