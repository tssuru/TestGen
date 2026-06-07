try:
    def f():
        try:
            res = int("8")
        except ZeroDivisionError: return 5
        except KeyboardInterrupt: return 9
        else: return 30
        return res
    
    print(f())
    
except: print('error')
