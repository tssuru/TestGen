try:
    def f():
        try:
            res = int("7")
            return 43
        except KeyboardInterrupt: return 8
        except ZeroDivisionError: return 1
        else: return 32
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
