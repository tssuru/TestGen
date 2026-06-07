try:
    def f():
        try:
            res = int("0")
        except BaseException: 
            return 2
        except ValueError: 
            return 1
        finally: return 24
        return res
    
    print(f())
except: print('error')
