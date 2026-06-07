try:
    
    try:
        print(8, end="")
        print(int(9/2), end="")
        print(0, end="")
    except Exception: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
