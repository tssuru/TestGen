try:
    def f():
        try:
            res = 3!=4
            return 45
        except BaseException: return 9
        except ValueError: return 7
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
