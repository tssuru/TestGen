try:
    def f():
        try:
            res = int(7%0)
        except BaseException: 
            return 5
        except Exception: 
            return 1
        else: return 35
        finally: return 25
        return res
    
    print(f())
except: print('error')
