try:
    def f():
        try:
            res = int(7//0)
            return 41
        except TypeError: return 4
        except ValueError: return 9
        else: return 31
        return res
    
    print(f())
    
except: print('error')
