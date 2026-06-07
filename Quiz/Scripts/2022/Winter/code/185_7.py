try:
    
    try:
        print(3, end="")
        print(int(8/0.0), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except Exception: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
