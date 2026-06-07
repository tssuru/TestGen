try:
    a,b,c=5,2,6
    def h(b):
        global c
        a-=2
        b=2
        c=1
        return a+b+c
    
    a,b,c=4,7,9
    print(h(a),a,b,c)
    
except: print('error')
