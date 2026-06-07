try:
    def f():
        try:
            res = 5<3
        except ZeroDivisionError: return 1
        except KeyboardInterrupt: return 0
        else: return 31
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
