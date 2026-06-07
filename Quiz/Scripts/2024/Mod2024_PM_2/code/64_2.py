try:
    def f():
        try:
            res = int(9//2)
            return 45
        except ZeroDivisionError: return 9
        except BaseException: return 0
        else: return 33
        return res
    
    print(f())
    
except: print('error')
