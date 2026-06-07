try:
    def f():
        try:
            res = int("3")
            return 40
        except KeyboardInterrupt: return 2
        except ZeroDivisionError: return 6
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
