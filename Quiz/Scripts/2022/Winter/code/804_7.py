try:
    
    try:
        print(4, end="")
        print(int(6%2), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except Exception: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
