try:
    def f():
        try:
            res = int("8")
            return 41
        except TypeError: return 9
        except ValueError: return 7
        else: return 34
        return res
    
    print(f())
    
except: print('error')
