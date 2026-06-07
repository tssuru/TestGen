try:
    def f():
        try:
            res = int("c3")
        except KeyboardInterrupt: return 5
        except ZeroDivisionError: return 9
        return res
    
    print(f())
    
except: print('error')
