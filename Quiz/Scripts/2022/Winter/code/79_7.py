try:
    
    try:
        print(2, end="")
        print(int(5/3), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(0, end="")
    
except: print('error')
