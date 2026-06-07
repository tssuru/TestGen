try:
    def f():
        try:
            res = int("b0")
            return 42
        except ZeroDivisionError: return 1
        except KeyboardInterrupt: return 9
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
