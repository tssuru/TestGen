try:
    def f():
        try:
            res = int(8/1)
        except ValueError: return 1
        except TypeError: return 9
        return res
    
    print(f())
    
except: print('error')
