try:
    
    try:
        print(3, end="")
        print(int(5/0.0), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except Exception: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
