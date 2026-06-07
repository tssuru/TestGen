try:
    def f():
        try:
            res = 0>5
            return 45
        except ValueError: return 1
        except KeyboardInterrupt: return 4
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
