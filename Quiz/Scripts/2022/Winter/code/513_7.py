try:
    
    try:
        print(8, end="")
        print(int(3//0), end="")
        print(1, end="")
    except ValueError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
