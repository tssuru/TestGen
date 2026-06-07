try:
    def f():
        try:
            res = 0==6
        except ValueError: 
            return 6
        except TypeError: 
            return 7
        return res
    
    print(f())
except: print('error')
