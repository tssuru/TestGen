try:
    def f():
        try:
            res = int(1//0)
        except ZeroDivisionError: return 0
        except KeyboardInterrupt: return 2
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
