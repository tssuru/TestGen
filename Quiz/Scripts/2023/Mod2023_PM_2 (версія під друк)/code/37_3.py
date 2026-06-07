try:
    def f():
        try:
            res = 6>=1
            return 42
        except ZeroDivisionError: return 9
        except ValueError: return 8
        else: return 32
        return res
    
    print(f())
    
except: print('error')
