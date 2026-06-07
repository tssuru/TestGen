try:
    def f():
        try:
            res = 4>=2
        except KeyboardInterrupt: return 4
        except ZeroDivisionError: return 9
        else: return 30
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
