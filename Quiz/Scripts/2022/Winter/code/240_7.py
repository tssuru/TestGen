try:
    
    try:
        print(6, end="")
        print(int(4%2), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except Exception: 
        print(8, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
