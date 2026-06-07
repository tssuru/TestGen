try:
    def f():
        try:
            res = int("d6")
        except ValueError: 
            return 0
        except BaseException: 
            return 1
        else: return 31
        finally: return 22
        return res
    
    print(f())
except: print('error')
