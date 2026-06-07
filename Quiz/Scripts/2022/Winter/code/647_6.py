try:
    a,b,c=8,3,0
    def h(a):
        a+=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=2,8,9
    print(h(a),a,b,c)
    
except: print('error')
