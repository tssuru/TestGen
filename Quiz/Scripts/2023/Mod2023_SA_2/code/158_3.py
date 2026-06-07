try:
    def f():
        try:
            res = int(3/0.0)
        except ValueError: return 1
        except KeyboardInterrupt: return 5
        else: return 31
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
