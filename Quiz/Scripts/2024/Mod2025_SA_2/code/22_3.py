try:
    def f():
        try:
            res = int(6//0.0)
            return 41
        except ValueError: 
            return 1
        except BaseException: 
            return 5
        else: return 33
        return res
    
    print(f())
except: print('error')
