try:
    def f():
        try:
            res = int(5//2)
            return 44
        except BaseException: return 9
        except ValueError: return 3
        else: return 35
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
