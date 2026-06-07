try:
    def f():
        try:
            res = int(3%0)
        except ValueError: return 0
        except BaseException: return 7
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
