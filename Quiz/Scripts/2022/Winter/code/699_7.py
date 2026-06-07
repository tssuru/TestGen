try:
    
    try:
        print(5, end="")
        print(int(4/0), end="")
        print(1, end="")
    except ValueError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
