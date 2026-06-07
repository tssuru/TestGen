try:
    def f():
        try:
            res = int("b4")
        except KeyboardInterrupt: return 3
        except ZeroDivisionError: return 2
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
