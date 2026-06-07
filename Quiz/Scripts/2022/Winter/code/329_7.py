try:
    
    try:
        print(5, end="")
        print(int(2/1), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except Exception: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
