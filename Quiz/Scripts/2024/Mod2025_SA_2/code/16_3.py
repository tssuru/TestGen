try:
    def f():
        try:
            res = int(0/0.0)
            return 45
        except BaseException: 
            return 6
        except ValueError: 
            return 5
        finally: return 21
        return res
    
    print(f())
except: print('error')
