try:
    a,b,c=1,0,6
    def h(b):
        a-=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=8,5,9
    print(h(a),a,b,c)
    
except: print('error')
