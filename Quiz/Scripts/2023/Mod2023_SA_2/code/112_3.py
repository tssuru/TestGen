try:
    def f():
        try:
            res = int(1%1)
            return 44
        except Exception: return 2
        except BaseException: return 6
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
