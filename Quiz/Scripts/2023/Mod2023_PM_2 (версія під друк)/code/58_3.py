try:
    def f():
        try:
            res = int("d5")
        except KeyboardInterrupt: return 7
        except ZeroDivisionError: return 4
        else: return 33
        return res
    
    print(f())
    
except: print('error')
