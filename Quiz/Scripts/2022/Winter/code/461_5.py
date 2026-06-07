try:
    
    a,b,c=8,9,6
    def h(a,b=7,c=7):
        print(a,b,c,end="")
    
    h(1,a=4)
    print(a,b,c)
    
except: print('error')
