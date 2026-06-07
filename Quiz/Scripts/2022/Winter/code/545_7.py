try:
    
    try:
        print(8, end="")
        print(int(1/1), end="")
        print(6, end="")
    except ValueError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
